#include <iostream>
using namespace std;
struct retangulo{
    float largura;
    float altura;
};
float area(retangulo a){
    double area = a.largura * a.altura;
}
float area1(retangulo b){
	double area1 = b.largura * b.altura;
}

int main(){
	float r,a;
    retangulo r1;
	retangulo x1;
    cout<<"\nEntre com a largura: " ;
    cin>>r1.largura;
    cout<<"\nEntre com altura: ";
    cin>>r1.altura;
    cout<<"\nEntre com a largura: " ;
    cin>>x1.largura;
    cout<<"\nEntre com altura: ";
    cin>>x1.altura; 
    r = area(r1);
    a = area1(x1);
		cout << "\n Areas:"<<r<<  " "<<a;
}
