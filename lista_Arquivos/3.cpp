#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    fstream fin("notas.txt");
    string nome;
    float p1 , p2 , t1 , t2 , t3 , t4;
    float np=2;
    float nt=4;
    float vp=0.7;
    while(fin>>nome){
        fin>>p1;
        fin>>p2;
        fin>>t1;
        fin>>t2;
        fin>>t3;
        fin>>t4;
        float vt=0.3;
        float sp=p1+p2;
        float st=t1+t2+t3+t4;
        float mp=sp/np;
        float mt=st/nt;
        float t=mp*vp;
        float p=mt*vt;
        float nf=t+p;
        cout << "\n" << nome << " " << nf << "\n" ;
        }
    getch();
}
