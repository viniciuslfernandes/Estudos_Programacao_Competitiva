#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){

    int n; cin>>n;
    vector<ll> vet(n);
    for(int i=0; i<n; i++){
        cin>>vet[i];
    }
    ll som=vet[0], maior=vet[0];
    for(int i=1; i<n; i++){
        som= max(vet[i], vet[i]+ som);
        maior = max(maior, som);
    }
    cout<<maior<<endl;
    return 0;
}