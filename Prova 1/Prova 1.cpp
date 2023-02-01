#include <fstream>
#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

struct supermecado{
    string nomeproduto;
    string quantidade;
    string marca;
    string preco;
};

void split(string linha, char at, string S[]){
    int pos = 0, fim, i=0;
    do {
        fim=linha.find(at, pos);
        if (fim == -1)
            S[i] = linha.substr(pos);
        else
            S[i++] = linha.substr(pos, fim - pos);
            pos = fim+1;
    }
    while (fim != -1);
}

void carregar(vector<supermecado> &s){
    string linha;
    ifstream arquivo;
    supermecado T;
    arquivo.open("supermecado.csv");
    if (arquivo.is_open()){
    while (getline (arquivo,linha)){
         string S[4];
         split(linha, ',', S);
         T.nomeproduto = S[0];
         T.quantidade = S[1];
         T.marca = S[2];
         T.preco = S[3];
         s.push_back(T);
        }
    }
    else {
        cout << "\nNao existe o arquivo.\n";
    }
    arquivo.close();
}

void inserir(vector<supermecado> &s){
    supermecado T;
    cout << "\nDigite o nome do produto: ";
    cin >> T.nomeproduto;
    cout << "\nDigite a marca: ";
    cin >> T.marca;
    cout << "\nDigite a quantidade: ";
    cin >> T.quantidade;
    cout << "\nDigite o preco: ";
    cin >> T.preco;
    cout << "\n";
    s.push_back(T);

getch();}

void ler(vector<supermecado> &s){
    for (int i=0; i<s.size(); i++){
        cout << "\nProduto: " << s[i].nomeproduto << ", Marca: " << s[i].marca << ", Quantidade: " << s[i].quantidade << ", Preco: " << s[i].preco << "\n";
    }
    if (s.size()==0)
        cout << "\nNao existe nenhum produto cadastrado.";
getch();}

void remover(vector<supermecado> &s){
    supermecado r;
    cout << "\nDigite o nome do produto que deseja excluir: ";
    cin >> r.nomeproduto;
    cout << "\nDigite a marca do produto: ";
    cin >> r.marca;
    cout << "\nDigite a quantidade do produto em estoque: ";
    cin >> r.quantidade;
    cout << "\nDigite o preco: ";
    cin >> r.preco;
    int cont=0;
    for (int i=0; i<s.size(); i++){
        if (r.nomeproduto==s[i].nomeproduto){
                if (r.marca==s[i].marca){
                        if (r.quantidade==s[i].quantidade){
                                if (r.preco==s[i].preco){
                                cout << "\nExcluido o Produto: " << s[i].nomeproduto << ", Marca: " << s[i].marca << ", Quantidade: " << s[i].quantidade << ", Preco: " << s[i].preco << "\n";
                                s.erase(s.begin()+i);
                                cont++;
                                }
                        }
                }
        }
    }
    if (cont==0)
        cout << "\nNao foi encontrado nenhum produto com esses dados.\n";
getch();}

void alterar(vector<supermecado> &s){
    supermecado r;
    int a;
    cout << "\nDigite o nome do produto que deseja excluir: ";
    cin >> r.nomeproduto;
    cout << "\nDigite a marca do produto: ";
    cin >> r.marca;
    cout << "\nDigite a quantidade do produto em estoque: ";
    cin >> r.quantidade;
    cout << "\nDigite o preco: ";
    cin >> r.preco;
    int cont=0;
    string novon,novom,novoq,novop;
    for (int i=0; i<s.size(); i++){
        if (r.nomeproduto==s[i].nomeproduto){
                if (r.marca==s[i].marca){
                        if (r.quantidade==s[i].quantidade){
                                if (r.preco==s[i].preco){
                                        cout << "\nDigite 1 para alterar o nome.\nDigite 2 para alterar a marca.\nDigite 3 para alterar a quantidade.\nDigite 4 para alterar o preco.\nDigite 5 para alterar tudo.\n";
                                        cin >> a;
                                        if (a==1){
                                            cout << "\nDigite o novo nome: ";
                                            cin >> novon;
                                            cout << "\nVoce alterou o nome do produto " << s[i].nomeproduto << " para: " << novon << "\n";
                                            s[i].nomeproduto=novon;
                                            cont++;
                                        }
                                        if (a==2){
                                            cout << "\nDigite a nova marca do produto: ";
                                            cin >> novom;
                                            cout << "\nVoce alterou a marca " << s[i].marca << " para: " << novom << "\n";
                                            s[i].marca=novom;
                                            cont++;
                                        }
                                        if (a==3){
                                            cout << "\nDigite a nova quantidade: ";
                                            cin >> novoq;
                                            cout << "\nVoce alterou a quantidade " << s[i].quantidade << " para: " << novoq << "\n";
                                            s[i].quantidade=novoq;
                                            cont++;
                                        }
                                        if (a==4){
                                            cout << "\nDigite o novo preco: ";
                                            cin >> novop;
                                            cout << "\nVoce alterou o preco " << s[i].quantidade << " para: " << novop << "\n";
                                            s[i].preco=novop;
                                            cont++;
                                        }
                                        if (a==5){
                                            cout << "\nDigite o novo nome: ";
                                            cin >> novon;
                                            cout << "\nVoce alterou o nome do produto " << s[i].nomeproduto << " para: " << novon << "\n";
                                            s[i].nomeproduto=novon;
                                            cout << "\nDigite a nova marca: ";
                                            cin >> novom;
                                            cout << "\nVoce alterou a marca " << s[i].nomeproduto << " para: " << novom << "\n";
                                            s[i].marca=novom;
                                            cout << "\nDigite a nova quantidade: ";
                                            cin >> novoq;
                                            cout << "\nVoce alterou a quantidade " << s[i].nomeproduto << " para: " << novoq << "\n";
                                            s[i].quantidade=novoq;
                                            cout << "\nDigite o novo preco: ";
                                            cin >> novop;
                                            cout << "\nVoce alterou o preco " << s[i].nomeproduto << " para: " << novop << "\n";
                                            s[i].preco=novop;
                                            cont++;
                                        }
                                }
                        }
                }
        }
    }
    if (cont==0){
        cout << "\nNao foi encontrado nenhum produto com o nome: " << r.nomeproduto << "\n";
    }
    if (cont>0)
        cout << "\nVoce alterou " << cont << " produtos no total.\n";
getch();}

void salvar(vector<supermecado> &s){
    ofstream arquivo;
    arquivo.open("supermecado.csv", ios::trunc );
    for(int i = 0; i < s.size(); i++){
        arquivo << s[i].nomeproduto << "," << s[i].quantidade
         << "," << s[i].marca << "," << s[i].preco
         << endl;
    }
}

int main(){
    vector<supermecado> s;
    carregar(s);
    int menu;
    while(1){
        cout<< "\n\n    Menu\nDigite 1 para inserir novo produto.\nDigite 2 para exibir o estoque.\nDigite 3 para remover um produto do estoque.\nDigite 4 para modificar um produto do estoque ou a quantidade de um.\nDigite 0 para sair\n";
        cin>>menu;
        cout << "\n";
        if (menu==1)
            inserir(s);
        if (menu==2)
            ler(s);
        if (menu==3)
            remover(s);
        if (menu==4)
            alterar(s);
        if (menu==0){
            salvar(s);
            break;
        }
    }
}
