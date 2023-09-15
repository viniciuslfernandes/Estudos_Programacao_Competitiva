#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    
    ll n; cin>>n;
    vector<int> vet;
    ll med=0,x;

    for(int i=0; i<n;i ++){
        cin>>x;
        vet.push_back(x);
    }
    sort(vet.begin(), vet.end());

    med=((n-1)/2);
    cout<<vet[med]<<endl;
    
    return 0;
}