#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int n, q;
    cin>>n>>q;
    vector <ll> vet(n+1);
    int aux=0;
    ll soma=0;
    vet[0]=0;
    for(int i=1; i<=n; i++){
        cin>>aux;
        vet[i]=soma+aux;
        soma+=aux;
    }

    for(int i=0; i<q; i++){
        int a, b;
        cin>>a>>b;
        if(a==b){
            cout<<vet[a]-vet[a-1]<<endl;
        }
        else{
            cout<<vet[b]-vet[a-1]<<endl;
        }
    }

    return 0;
}
