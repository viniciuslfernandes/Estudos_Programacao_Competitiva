#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    while(cin>>n){
        if( n==0) break;
        ll aux, acumulador=0, trabalho=0; 
        for(ll i=0; i<n; i++){
            cin>>aux;
            acumulador+=aux;
            trabalho+=abs(acumulador);
        }
        cout<<trabalho<<endl;

    }
    return 0;
}