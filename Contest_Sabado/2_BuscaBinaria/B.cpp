#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll buscaB(ll a);

vector <ll> vet;
int main(){

    ll n, q; cin>>n>>q; 
    ll x;
    for(ll i=0; i<n; i++){
        cin>>x;
        vet.push_back(x);
    }
    
    for(ll i=0; i<q; i++){
        cin>>x;
        x=buscaB(x);
        cout<<x<<endl;
    }
    
    return 0; 
}

ll buscaB(ll a){
    ll ini = 0;
    ll fim = vet.size() - 1;
    while (ini <= fim) {
        ll meio = ini + (fim - ini) / 2;
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
