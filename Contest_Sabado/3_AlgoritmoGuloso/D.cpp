#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll n; cin>>n;
    ll aux=0, som=0, maior_som=0, anterior=0;
    for(ll i=0; i<n; i++){
        cin>>aux;
        if(aux>anterior){
            som++;
            if(som>maior_som){
                maior_som=som;
            }
        }
        else{
            som=1;
        }
        anterior=aux;
    }
   
   
    cout<<maior_som<<endl;

    return 0;
}