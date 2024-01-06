#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    vector<int> vet={100, 20, 10, 5, 1};
    ll n, cont=0, som=0; cin>>n;
    for(int i=0; i<5; i++){
        cont= n/vet[i];
        som+=cont;
        n-=cont*vet[i];
    }

    cout<<som<<endl;
    return 0;
}