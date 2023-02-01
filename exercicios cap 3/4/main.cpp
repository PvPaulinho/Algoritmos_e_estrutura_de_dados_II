#include <iostream>
#include <vector>
using namespace std;
int particao( vector<int> &V, int inicio, int fim) {
int pivo = V[fim];
int i = inicio;
int j = fim-1;
while( i <= j ){
while( V[i] < pivo )
i++;
while( j >= inicio && V[j] >= pivo )
j--;
if( i < j )
swap(V[i], V[j]);
}
swap(V[fim], V[i]);
return i;
}
void quickSort(vector<int> &V, int inicio, int fim) {
if (inicio < fim) { // Quando inicio = fim, a parti��o �
// unit�ria e deve retornar
int corte = particao(V, inicio, fim);
quickSort(V, inicio, corte - 1);
quickSort(V, corte + 1, fim);
}
}
int main() {
int i, x;
vector<int> V;
for (i=0;i<10;i++){
cin >> x;
V.push_back(x);
}
quickSort(V, 0, 9);
for (int i = 0; i < V.size(); i++)
cout <<V[i]<<endl;
return 0;
}

