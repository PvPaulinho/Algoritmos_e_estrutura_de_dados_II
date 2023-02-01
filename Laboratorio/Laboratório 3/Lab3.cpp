#include <iostream>
using namespace std;

struct aluno{
string nome;
int idade;
int matricula;
aluno *seg;
};

void insere(string n, int i, int m, aluno *lst){
    aluno *nova;
    nova = new aluno;
    nova->nome = n;
    nova->idade = i;
    nova->matricula = m;
    nova->seg = lst ->seg;
    lst ->seg = nova;
}

void imprima(aluno *lst){
    aluno *p;
    for(p=lst->seg; p!=NULL; p=p->seg){
        cout << "\n" << p->nome << "\n" << p->idade << "\n" << p->matricula << "\n";
    }
}

aluno *Busca (string n, int i, int m, aluno *lst) {
    aluno *p;
    p = lst->seg;
    while (p != NULL && p->nome != n)
    p = p->seg;
    return p;
}

void BuscaERemove (string n, int i, int m, aluno *lst) {
    aluno *p, *q;
    p = lst;
    q = lst->seg;
    while (q != NULL && q->nome != n) {
        p = q;
        q = q->seg;
    }
    if (q != NULL) {
        p->seg = q->seg;
        cout << "\nAluno removido: " << q->nome << endl;
        delete q;
    } else{
        cout << "\nAluno nao encontrado.\n" << n;
    }
}

int main(){
    aluno a;             //Cria o no cabe�a
    aluno *lst;         //Cria um ponteiro para o cabeca
    a.seg = NULL;  //Lista vazinha
    lst = &a;
    int num;        //Ponteiro aponta para o cabeca, sempre
    string no;
    int id;
    int ma;
    while(1){
        cout<<"\nMenu:\n\nDigite 1 para inserir aluno\nDigite 0 para Sair\n\n";
        cin >> num;
        if(num == 0) break;
        if(num == 1){
            cout << "Digite o nome do aluno: ";
            cin >> no;
            cout << "Digite a idade: ";
            cin >> id;
            cout << "Digite a matricula: ";
            cin >> ma;
        }
            insere(no,id,ma,lst);
    }
    cout << "\n\nConteudo da Lista:\n";
    imprima(lst);

    while(1){
        cout << "\n\nMenu:\nDigite 1 para buscar aluno\nDigite 0 para Sair\n\n";
        cin >> num;
        if (num == 0) break;
        cout << "\nDigite o nome do aluno: ";
        cin >> no;
        aluno *elemento = Busca(no, id, ma,lst);
        if(elemento == NULL) cout<<"\nAluno nao encontrado.";
        else {
            char op;
            cout << "\nEncontrado, Aluno: "<< elemento->nome << "  Deseja apaga-lo(S/N):";
            cin >> op;
            if(op == 's' || op == 's') BuscaERemove(no, id, ma, lst);
        }
    }
    imprima(lst);
}

