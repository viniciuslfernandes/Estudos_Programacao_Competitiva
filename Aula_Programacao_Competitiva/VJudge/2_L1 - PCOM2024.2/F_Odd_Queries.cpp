#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int t; cin>>t;
    for(int i=0; i<t; i++){
        ll n, q;
        cin>>n>>q;
        vector <ll> vet;
        vet.push_back(0);
        for(int j=1; j<=n; j++){
            ll aux; cin>>aux;
            vet.push_back(vet[j-1]+aux);
        }
        
        for(int j=0; j<q; j++){
            ll x, y, z; cin>>x>>y>>z;
            ll valor = (vet[int(vet.size()-1)]-vet[y])+vet[x-1]+((y-x-1)*z);
            if(valor%2!=0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }

    }
    
    return 0;
}


