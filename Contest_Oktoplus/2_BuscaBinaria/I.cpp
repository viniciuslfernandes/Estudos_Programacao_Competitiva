#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
vector<ull> vet;
int main(){

    ull n, x;
    cin>>n>>x;
    for(int i=0; i<n; i++){
        ull a; cin>>a;
        vet.push_back(a);
    }
    int i=0;
    while(n>0){
        int aux= x-vet[i];
        buscaB(aux);
    }
    return 0;
}

ull buscaB(ull a){

    ull ini = 0;
    ull fim = vet.size() - 1;

    while (ini <= fim) {
        ull meio = (fim - ini) / 2;

        if (vet[meio] == a) {
            return meio; 
        } else if (vet[meio] < a) {
            ini = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1; 
}