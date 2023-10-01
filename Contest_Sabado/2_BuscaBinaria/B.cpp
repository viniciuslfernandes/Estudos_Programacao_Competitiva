#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull buscaB(ull a);

vector <ull> vet;
int main(){

    ull x;
    ull n, q;
    cin>>n>>q;
    for(ull i=0; i<n; i++){
        cin>>x;
        vet.push_back(x);
    }
    sort(vet.begin(), vet.end());
    for(ull i=0; i<q; i++){
        cin>>x;
        cout<<buscaB(x)<<endl;
    }
    
    return 0; 
}

ull buscaB(ull a){

    ull ini = 0;
    ull fim = vet.size() - 1;

    while (ini <= fim) {
        ull meio = ini + (fim - ini) / 2;

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
