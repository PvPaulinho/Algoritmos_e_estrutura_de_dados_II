#include <iostream>
#include <conio.h>
using namespace std;
int f2(int n , int f){
    cout << "Fibonacci de " << n << " = ";
    if (n==0){
        cout << 1 << "teste" << endl;
        return 1, f=0;
   }
    if (n==1;f==0) {
        cout << 1 << endl;
        return 1;
    }
    if (n==1) {
        cout << 1 << endl;
        return 1;
    }
    else {
        cout<< "Fibonacci( "<< n-1 << " ) + (Fibonacci ( "<< n-2 << " ))"<< endl;
        return n = f2(n-1 , 1) + (f2(n-2 , 1));
    }
}
int main(){
    int p,r,f=1;
    cout<< "digite um numero: " << endl;
    cin >> p;
    r= f2(p,f);
    cout<< "\n Fibonacci de "<< p << " e igual a: "<< r;
    return 0;
    getch();
}
