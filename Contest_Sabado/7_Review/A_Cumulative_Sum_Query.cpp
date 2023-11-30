#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    vector<int> vet(n+1);
    for(int i=1; i<=n; i++){
        cin>>vet[i];
        vet[i]+=vet[i-1];
    }
    int q; cin>>q;
    for(int i=0; i<q; i++ ){
        int a, b; cin>>a>>b;
        cout<<vet[b+1] - vet[a]<<endl;
    }

    return 0;
}