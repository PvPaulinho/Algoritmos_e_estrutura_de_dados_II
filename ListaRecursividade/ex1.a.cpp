#include <iostream>
using namespace std;
int fatorial(int n){
   cout<< "fatorial de " << n << " = ";
   if (n==0){
        cout << 1 << endl;
        return 1;
    }
    else{
        cout<< n << " * fatorial de "<< n-1 << endl;
        return n* fatorial(n-1);
    }
}
int main(){
    int p,f,i;
    cout<< "digite um numero: " << endl;
    cin >> p;
    f= fatorial(p);
    cout<< "\n fatorial de "<< p << " e igual a: ";
    for(i=p;i>=0;i--){
        if (i==0){
            cout << 1 << " = " << f << endl;
        }
        else{
            cout<< i << " * ";
        }
    }
    return 0;
}
