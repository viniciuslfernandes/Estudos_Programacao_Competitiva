#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool busca_b(vector<ll> &v, int x) {
    int i = 0, f = v.size() - 1, m;
    while(f >= i) {
        m = i + (f - i)/2;
        if(v[m] == x)
            return true;
        else if(x < v[m])
            f = m - 1;
        else
            i = m + 1;
    }
    
    return false;
}

int main(){

    int n; cin>>n;
    vector <ll> vet(n);

    for(int i=0; i<n; i++){
        cin>>vet[i];
    }
    // sort(vet.begin(), vet.end());
    int k; cin>>k;
    for(int i=0; i<n; i++){
        int b = k-vet[i];
        if(busca_b(vet, b)){
            cout<<vet[i]<<" "<<b<<endl;
            return 0;
        }
    }

    return 0;
}