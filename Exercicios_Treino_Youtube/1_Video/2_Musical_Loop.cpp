#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(cin>>n){
        if(n==0) break;
        vector<int> vet(n+2);
        for(int i=0; i<n; i++){
            cin>>vet[i];
        }
        vet[n] = vet[0];
        vet[n+1]= vet[1];
        int cont =0;
        for(int i=1; i<=n; i++){
            if((vet[i-1]>vet[i] && vet[i]<vet[i+1]) || (vet[i-1]<vet[i] && vet[i]>vet[i+1])){
                cont++;
            }
        }
        cout<<cont<<endl;
    }
    return 0;
}
//https://www.beecrowd.com.br/judge/en/problems/view/1089