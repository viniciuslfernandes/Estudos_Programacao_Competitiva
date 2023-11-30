#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> vet(n);
        for(int i=0; i<n; i++){
            cin>>vet[i];
        }
        for(int i=0, j=1; i<n;i++){
            j=i+1;
            if(vet[i]<=vet[j]){
                j++;
            }else{
                while(vet[i]>vet[j]){
                    if((vet[i]%2==0 && vet[j]%2==0)or (vet[i]%2!=0 && vet[j]%2!=0)){
                        int aux= vet[i];
                        vet[i]=vet[j];
                        vet[j]=aux;
                    }else{
                        j++; 
                        if(j>=n){
                            cout<<"NO"<<endl;
                            break;
                        }
                        
                    }
                }
            }
        }

    }

    return 0;
}