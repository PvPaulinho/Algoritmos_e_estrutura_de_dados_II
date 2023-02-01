#include <iostream>
#include <conio.h>
using namespace std;

int potencia(int x,int y){
  if ( y == 0)
    return 1;
  else
    return x*potencia(x, y-1);
}
int main(){
    int x;
    int y;
    cout << "\nInforme um valor para x: ";
    cin >> x;
    cout << "\nInforme um valor para y: ";
    cin >> y;
    cout << "\no valor de x^y e: " << potencia(x,y) << endl;
    getch();
}
