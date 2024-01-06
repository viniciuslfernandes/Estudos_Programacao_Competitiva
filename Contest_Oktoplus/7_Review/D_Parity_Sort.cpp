#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> vet(n);
        vector<int> paridade(n);
        for(int i=0; i<n; i++){
            cin>>vet[i];
            paridade[i]=vet[i];
        }
        sort(paridade.begin(), paridade.end());

        int aux=1;
        for(int i=0; i<n; i++){
            if(paridade[i]%2 != vet[i]%2){
                aux=0;
            }
        }
        if(aux==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }

    return 0;
}