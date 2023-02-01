#include <iostream>
#include <conio.h>
using namespace std;

int fibonacci (int n){
    if (n==0){
        return 1;
    }
    if (n==1){
        return 1;
    }
    else{
        return n = fibonacci(n-1)+fibonacci(n-2);
}
}

int main(){
    int n;
    int m;
    while(1){
        cout << "\n\nSe deseja executar o programa digite 1.\nSe deseja finalizar o programa digite 0.\n";
        cin >> m;
        if(m==1){
            cout << "\nDigite um numero para o N-esimo numero da serie de fibonacci: ";
            cin >> n;
            cout << "\nO numero de fibonacci vai ser: " << fibonacci(n);
        getch();
        }
        else
            break;
    }
}
