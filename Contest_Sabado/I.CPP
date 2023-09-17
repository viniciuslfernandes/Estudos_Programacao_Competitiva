#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    ll n, x, aux;
    cin>>n>>x;
    vector<int>vet;
    for(int i=0; i<n; i++){
        cin>>aux;
        vet.push_back(aux);
    }
    sort(vet.begin(), vet.end());
    
    return 0;
}