#include <bits/stdc++.h>
using namespace std;


int main(){
    //M=altura    n=pinos
    int x,n, m, diferenca=0; cin>>n>>m;
    vector <int> alturas;
    for(int i=0; i<n;i++){
        cin>>x;
        alturas.push_back(x);
    }
    x=0;
    for(int i=0; i<n-1; i++){
        if(alturas[i]==m);
        else{
            diferenca=m-alturas[i];
            x+=abs(diferenca);
            alturas[i]+=diferenca;
            alturas[i+1]+=diferenca;
        }
        
    }
    diferenca=m-alturas[n-1];
    x+=abs(diferenca);
    cout<<x<<endl;
    return 0;
}


