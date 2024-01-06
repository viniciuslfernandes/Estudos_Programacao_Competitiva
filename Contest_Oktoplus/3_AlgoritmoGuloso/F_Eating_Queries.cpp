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
        int aux;
        while(q--){
            cin>>aux;
            int lw= lower_bound(vet.begin(), vet.end(), aux)-vet.begin();
            int doces=0, acucar=0;
            for(int i=lw; i>=0; i--){
                if(acucar<aux){
                    acucar+=vet[i];
                    doces++;
                }
                else{
                    break;
                }
            }
            if(acucar>=aux){
                cout<<doces<<endl;
            }else cout<<-1<<endl;

        }
    }
    return 0;
}
