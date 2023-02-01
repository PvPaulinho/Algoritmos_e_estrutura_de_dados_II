#include <iostream>
#include <conio.h>
using namespace std;

float harmonico (float n){
    if (n==1){
        return 1;
    }
    else{
        return n = (1/n) + harmonico(n-1);
}
}

int main(){
    float n=0;
    while (1){
        cout << "\nDigite um numero para se calcular o harmonico dele ou digite 0 para finalizar o programa: ";
        cin >> n;
        if (n==0)
            break;
        else
            cout << "\nO harmonico de " << n << " e: " << harmonico(n) << endl;
        getch();
    }
}
