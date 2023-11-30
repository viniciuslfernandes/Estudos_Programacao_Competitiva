#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    vector<ll> vet(n+1);
    vet[0]=0;
    ll sum=0;
    for(int i=1; i<=n; i++){
        cin>>vet[i];
        if(vet[i]%2==0) sum++;
        vet[i]=vet[i]+vet[i-1];
        if(vet[i]%n==0) sum++;
    }

    for(int i=2, j=1; i<=n;){
        
    }   
    cout<<sum<<endl;

    return 0;
}


