#include<iostream>
using namespace std;
struct triangulo{
	float base, altura;
};
float calculaArea(triangulo a, triangulo b, triangulo c){
    double areaA= a.base*a.altura/2;
	double areaB= b.base*b.altura/2;
	double areaC= c.base*c.altura/2;
		if(areaA>areaB && areaA>areaC)
		    return areaA;
		if(areaB>areaA && areaB>areaC)
		    return areaB;
		else return areaC;
   }
	int main(){
		triangulo t1, t2,t3;
		cout<< "\nEntre com base 1 e altura 1: ";
		cin>>t1.base>>t1.altura;
		cout<< "\nEntre com base 2 e altura 2: ";
		cin>>t2.base>>t2.altura;
		cout<< "\nEntre com base 3 e altura 3: ";
		cin>>t3.base>>t3.altura;
		double t = calculaArea(t1,t2,t3);
		
		cout << "A maior area e: " << t;
}
