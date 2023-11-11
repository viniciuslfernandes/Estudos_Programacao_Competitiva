#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int  main(){

    int n, d; cin>>n>>d;
    vector<ll> vet(n);
    vet[0]=0;
    for(int i=1; i<=n; i++){
        cin>>vet[i];
        vet[i]=vet[i]+vet[i-1];
    }
    for(int i=0; i<d; i++){
        int a,b; cin>>a>>b;
        cout<<vet[b]-vet[a-1]<<endl;
    }

    return 0;
}
