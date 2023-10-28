#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, k, som=0, total=0;
    cin>>n>>k;
    vector<int>vet(n);
    vet[0]=0;
    for(int i=1; i<=n; i++){
        cin>>vet[i];
        if(vet[i]==k) total+=1;
    }

    for(int i=1; i<=n; i++){
        
        som+=vet[i];
        if(som==k && vet[i]!=k){
            total+=1;
        }


        else if(som>k){
            if(vet[i]<=k){
                som=vet[i];
            }else{
                som=0;
            }
        }
    }

    cout<<total<<endl;
    return 0;
}

/*
0 0 0 0 0 5 12 0 1 0 0 0 51 0 0
*/