#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, cont_esq=0, cont_dir=0;
    cin>>n;
    int v[n];
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    for(int i=0; i<n; i++){
        if(v[i]==-1){
            for(int j=i;j>=0; j--){
                cont_esq++;
                if(v[j]==0){
                    break;
                } 
            }
            for(int j=i; j<n; j++){
                cont_dir++;
                if(v[j]==0){
                    break;
                }
            }
            if(cont_esq<cont_dir){
                cout<<cont_esq<<" ";
            }else{
                cout<<cont_dir<<" ";
            } 
            cont_dir=0;
            cont_esq=0;
        }
        else{
            cout<<"0 ";
        }
        

    }

    return 0;
}