#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ull;

int main(){

    ll n; cin>>n;
    vector <ull> vet;
    ull aux, k;
    for(ll i=0; i<n; i++){
        cin>>aux;
        vet.push_back(aux);
    }
    cin>>k;


    int ini=0, fim=n, meio, a, b; 

    while(ini<=fim){

        meio=(ini+fim)/2; 

        if(vet[meio] + vet[ini]>k){ 
            fim=meio-1; 
            a=vet[meio];
            b=vet[ini]; 
        }

        if(vet[meio] + vet[ini]<k){
            ini=ini+1;
            a=vet[meio];
            b=vet[ini]; 
        }
        if(vet[meio] + vet[ini] == k){
            a=vet[meio];
            b=vet[ini]; 
            break;
        }
        
    }
    cout<<b<<" "<<a<<endl;



    return 0;
}
