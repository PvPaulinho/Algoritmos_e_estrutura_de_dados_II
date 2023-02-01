#include <iostream>
#include <conio.h>
using namespace std;
struct viagem {
    float distancia;
    float consumo;
};
float kmlitro(viagem x){
    float m;
    m=x.distancia/x.consumo;
    return m;
}
int main(){
    viagem v[100];
    float kml[100];
    for (int i=0;i<100;i++){
        cout<< "Digite a distancia percorrida: ";
        cin>>v[i].distancia;
        cout<< "Digite o consumo de litros gasto: ";
        cin>>v[i].consumo;
        kml[i]=kmlitro(v[i]);
    }
    for (int i=0;i<100;i++){
        cout<< "Distancia: "<<v[i].distancia<< "       Consumo: "<<v[i].consumo<< "       Km/litro: "<<kml[i]<< "\n";
    }
}
