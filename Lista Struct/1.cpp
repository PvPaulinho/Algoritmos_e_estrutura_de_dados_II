#include <iostream>
#include <conio.h>
using namespace std;
struct Retangulo{
    float altura;
    float largura;
};
int main (){
    Retangulo r1,r2;
    float ar1,ar2;
    cout<< "Informe a altura do primeiro retangulo: ";
    cin>>r1.altura;
    cout<< "Informe a largura do primeiro retangulo: ";
    cin>>r1.largura;
    cout<< "\nInforme a altura do segundo retangulo: ";
    cin>>r2.altura;
    cout<< "Informe a largura do segundo retangulo: ";
    cin>>r2.largura;
    ar1=r1.altura*r1.largura;
    ar2=r2.altura*r2.largura;
    cout<< "\nA area do primeiro retangulo e: "<<ar1<< ", e a area do segundo retangulo e: "<<ar2;
getch();}
