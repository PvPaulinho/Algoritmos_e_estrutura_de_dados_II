#include <iostream>
#include <conio.h>
using namespace std;

float S (float n){
    float c=1+(n*n);
    float d=c/n;
    if(n==1)
        return 2;
    else{
        return n=S(d)+S(d-1);
    }
}

int main(){
    float n;
    while (1){
        cout << "\nDigite um numero para se calcular a funcao S ou digite 0 para finalizar o programa: ";
        cin >> n;
        if (n==0)
            break;
        else{
            cout << "\nO valor da funcao S vai ser: " << S(n) << endl;
        }
    }
    getch();
}
