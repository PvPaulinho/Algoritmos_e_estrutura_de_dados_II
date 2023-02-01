#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int n;
    ifstream fin("1.txt");
    ofstream p ("2-par.txt");
    ofstream i ("2-impar.txt");
    while(fin>>n){
        if (n%2==0){
            p<<n<<"\n";
        }
        else{
            i<<n<<"\n";
        }
    }
       getch();
}
