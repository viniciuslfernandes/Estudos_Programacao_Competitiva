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
    }

    for(int i=1, j=0; i<=n; i++){
        vet[i]+=vet[i-1];
        if(vet[i]%n==0){
            sum++;
        }
        while(vet[i]>n){
            vet[i]-=vet[j];
            j++;
        }
        
    }   
    cout<<sum<<endl;

    return 0;
}
//2 3 8

