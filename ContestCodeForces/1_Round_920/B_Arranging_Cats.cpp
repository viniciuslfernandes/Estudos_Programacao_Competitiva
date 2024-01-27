#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string vet, aux;
        cin>>vet;
        cin>>aux;
        int inc=0, sobrando=0;
        for(int i=0; i<n; i++){
            if(aux[i]=='1' and vet[i]=='0'){
                inc++;
            }
            else if(aux[i]=='0' and vet[i]=='1'){
                sobrando++;
            }
        }
        if(inc>=sobrando){
            cout<<inc<<endl;
        }
        else{
            cout<<sobrando<<endl;
        }

    }

    return 0;
}