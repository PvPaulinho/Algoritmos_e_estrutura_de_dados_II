#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    ifstream x ( "5.txt" );
    ofstream y ( "5-novo.txt" );
    string nome;
    int codigo;
    float salario;
    while (x>>nome){
        x>>codigo;
        x>>salario;
        if (codigo==1){
            salario=salario+salario*0.1;
        }
        if (codigo==2){
            salario=salario+salario*0.2;
        }
        if (codigo==3){
            salario=salario+salario*0.3;
        }
        if (codigo>3) {
            salario=salario+salario*0.4;
        }
        y << nome << " " << codigo << " " << salario << "\n";
    }
}
