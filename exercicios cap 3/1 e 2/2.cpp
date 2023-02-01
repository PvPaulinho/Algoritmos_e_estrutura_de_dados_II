void selecao(vector<int> &V){
int menor;
for (int i=0; i < V.size();i++){
menor = i;
for (int j=i+1;j<V.size();j++){
if (V[j] < V[menor])
menor = j;
}
swap(V[i], V[menor]);
}
}
