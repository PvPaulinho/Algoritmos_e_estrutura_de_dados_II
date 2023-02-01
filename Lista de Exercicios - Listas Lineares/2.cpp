#include<iostream>
#include<conio.h>
using namespace std;

struct Contato {
    string nome;
    long telefone;
    Contato *seg;
};

void BuscaERemove (string x, long y, Contato *p) {
    Contato *i, *q;
    i = p->seg;
    q = i->seg;
    while (q != NULL && q->nome != x) {
        i = q;
        q = q->seg;
    }
    if (q != NULL) {
        i->seg = q->seg;
        cout << "\nNumero removido: " << q->nome << endl;
        delete q;
    } else{
        cout << "\nNumero nao encontrado\n" << x;
    }
}

int main() {
    Contato *p;
    p->seg=NULL;
    string n;
    long t;
    for (int i=1; i>0; i++){
        int m;
        cout << "\nMenu\n\n1 - Inserir contato.\n2 - Listar todos os contatos.\n3 - Buscar telefone.\n4 - Excluir contato.\n0 - Sair.\n\nOpcao: ";
        cin >> m;
        if (m==0){
            break;
        }
        if (m==1){
            cin.ignore();
            cout << "\nDigite o nome do contato: ";
            getline(cin,n);
            cout << "\nDigite o telefone: ";
            cin >> t;
            Contato *novo;
            novo = new Contato;
            novo ->nome=n;
            novo -> telefone = t;
            novo -> seg = p -> seg;
            p ->seg = novo;
        }
        if (m==2){
            Contato *i;
            for (i=p->seg; i!=NULL; i=i->seg){
                cout << "\nNome: " << i->nome << "\nTelefone: " << i->telefone << "\n";
            }
        }
        if (m==3){
            string no;
            cin.ignore();
            cout << "\nDigite o nome do contato que deseja ver o numero: ";
            getline(cin,no);
            Contato *i;
            int f = 0;
            for (i=p->seg; i!=NULL; i=i->seg){
                if (i->nome == no){
                    cout << "\nTelefone: " << i->telefone << "\n";
                    f++;
                }
            }
            if (f==0){
                cout << "\nContato nao encontrado.\n";
            }
        }
        if (m==4){
            cin.ignore();
            cout << "\nDigite o nome do contato que deseja ver o numero: ";
            getline(cin,n);
            Contato *i;
            int f = 0;
            for (i=p->seg; i!=NULL; i=i->seg){
                if (i->nome == n){
                char op;
                cout << "\nEncontrado, Aluno: "<< i->nome << "  Deseja apaga-lo(S/N):";
                cin >> op;
                if(op == 's' || op == 's') BuscaERemove(n, t, p);
                }
            }
        }
    }
getch();
}
