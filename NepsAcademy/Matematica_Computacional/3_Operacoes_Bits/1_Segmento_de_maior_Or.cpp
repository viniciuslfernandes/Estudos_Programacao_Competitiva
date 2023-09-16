#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> vet;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        vet.push_back(x);
    }

    int soma_atual=0, maior=vet[0]|0; 
    for(int i=0; i<n; i++){
        soma_atual= soma_atual|vet[i];
        if(soma_atual>maior) maior=soma_atual;
        if(soma_atual<0) soma_atual=0;
    }
    cout<<maior<<endl;
    return 0;
}