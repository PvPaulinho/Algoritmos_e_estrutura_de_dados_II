#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int buff;
    int i=0;
    int soma=0;
    int n=0;
    ifstream fin("1.txt");
    while(fin>>buff,i<20){
        cout << buff << "\n";
        i++;
        soma=soma+buff;
        if (buff<10){
                n++;
        }
    }
    float media=soma/20;
    cout<< "\nA media dos 20 numeros do arquivo e: " << media << "\nE a quantidade de numeros menores que 10 e: " << n;
    getch();
}
