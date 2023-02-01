#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    string arquivo;
    string palavratexto;
    string palavra;
    int cont=0;
    cout << "\Digite o nome do aquivo do texto a ser lido: ";
    cin >> arquivo;
    ifstream x (arquivo);
    cout << "\nDigte a palavra: ";
    cin >> palavra;
    while (x>>palavratexto){
        if (palavratexto==palavra){
        cont++;
        }
    }
    cout << "\n\nA palavra e exibida " << cont << " vezes no arquivo.";
    getch();
}
