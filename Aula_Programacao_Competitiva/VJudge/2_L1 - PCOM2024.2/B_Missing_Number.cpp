#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n; cin>>n;
    vector <ll> vet(n);
    for(int i=1; i<n; i++){
        cin>>vet[i];
    }
    sort(vet.begin(), vet.end());
    for(int i=1; i<=n; i++){
        if(vet[i]!=i){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}