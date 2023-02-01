int partition(vector<int> &V, int inicio, int fim) {
int pivo = V[fim];
int j = inicio - 1;
for (int i = inicio; i < fim; i++) {
if (V[i] < pivo) {
j = j + 1;
swap(V[j], V[i]);
}
}
V[fim] = V[j + 1];
V[j + 1] = pivo;
return (j + 1);
}
