#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n, q; cin>>n>>q;
        vector<int>vet(n);
        for(int i=0; i<n; i++){
            cin>>vet[i];
        }
        sort(vet.begin(), vet.end());
        for(int i=0; i<q; i++){
            int aux; cin>>aux;
            int lw= lower_bound(vet.begin(), vet.end(), aux)-vet.begin();
            int som=0, cont=0; 
            for(int i=lw; i<n or aux==0; i++){
                cont= aux/vet[i];
                som+=cont;
                aux-=cont*vet[i];
            }
            cout<<som<<endl;
        }
    }
    return 0;
}