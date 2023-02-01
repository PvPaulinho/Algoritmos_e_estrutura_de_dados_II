#include <iostream>
#include <conio.h>
using namespace std;
struct triangulo{
    float base;
    float altura;
};
float calcuraArea (triangulo x){
    float ar;
    ar=(x.base*x.altura)/2;
    return ar;
}
int main(){
    triangulo a,b,c;
    cout<< "Digite a base e a altura do primeiro triangulo: ";
    cin>> a.base >> a.altura;
    cout<< "\nDigite a base e a altura do segundo triangulo: ";
    cin>> b.base >> b.altura;
    cout<< "\nDigite a base e altura do terceiro triangulo: ";
    cin>> c.base >> c.altura;
    float ara,arb,arc;
    ara=calcuraArea(a);
    arb=calcuraArea(b);
    arc=calcuraArea(c);
    cout<< "O primeiro triangulo tem base de tamanho "<<a.base<< ", altura de tamanho "<<a.altura<< ", e area de tamanho "<<ara<< ".\n";
    cout<< "O segundo triangulo tem base de tamanho "<<b.base<< ", altura de tamanho "<<b.altura<< ", e area de tamanho "<<arb<< ".\n";
    cout<< "O terceiro triangulo tem base de tamanho "<<c.base<< ", altura de tamanho "<<c.altura<< ", e area de tamanho "<<arc<< ".\n";
    if (ara>arb && ara>arc){
        cout<< "O primeiro triangulo tem a area maior, com: "<<ara;
    }
    if (arb>ara && arb>arc){
        cout<< "O segundo triangulo tem area maior, com: "<<arb;
    }
    if (arc>ara && arc>arb){
        cout<< "O terceiro triangulo tem area maior, com: "<<arc;
    }
    if (ara==arb && ara>arc){
        cout<< "O primeiro triangulo e o segundo tem a area maior, com: "<<ara<< " cada um.";
    }
    if (ara>arb && ara==arc){
        cout<< "O primeiro e o terceiro triangulo tem a area maior, com: "<<ara<< " cada um.";
    }
    if (arb>ara && arb==arc){
        cout<< "O segundo e o terceiro triangulo tem area maior, com: "<<arb<< " cada um.";
    }
getch();}
