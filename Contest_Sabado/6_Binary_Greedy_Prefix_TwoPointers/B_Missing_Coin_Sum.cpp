#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    vector<ll> vet(n);
    for(int i=0; i<n; i++){
        cin>>vet[i];
    }

    sort(vet.begin(), vet.end());
    ll menor=1;

    for(int i=0; i<n && vet[i]<=menor; i++){
        menor+= vet[i];
    }
    cout<<menor<<endl;
    
    return 0;
}