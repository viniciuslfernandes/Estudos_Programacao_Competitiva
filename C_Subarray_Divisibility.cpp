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
        vet[i]=(vet[i]+vet[i-1]);
    }

    for(int i=0, j=1; i<=n;){
        if(abs(vet[j]-vet[i])%n==0){
            sum++;
        }
    }
    
    cout<<sum<<endl;

    return 0;
}

