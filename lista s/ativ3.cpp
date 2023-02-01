#include<iostream>
using namespace std;
struct viagem{
	float distancia;
	float consumo;
};
float kmlitro(viagem k ){
	double kmlitro = k.distancia/k.consumo;
}
int main(){
	int t=3; 
	viagem v[t];   
    for(int i=0; i<t;i++){
        cout << "\nDigite dist:";
        cin>>v[i].distancia;    
        cout <<"\nConsumo: ";
        cin>>v[i].consumo;
    }
    for(int i=0;i<t;i++){
    	double k = kmlitro(v[i]);
    	cout<<"\nMedia de consumo: "<<kmlitro<<" Distancia: "<<v[i].distancia<<" consumo: "<<v[i].consumo;
	}
}
