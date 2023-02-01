#include <iostream>
#include <vector>
using namespace std;
//...
int main() {
int i, x;
vector<int> V;
for (i=0;i<10;i++){
cin >> x;
V.push_back(x);
}
//ordena(V);
for (int i=0;i<V.size();i++){
cout << V[i] << endl;
}
return 0;
}
