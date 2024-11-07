#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int n; cin>>n;
    vector<ll> idade(n);
    vector<ll> vet;
    for(int i=0; i<n; i++){
        cin>>idade[i];
    }

    for(int i=0, j=i+1; i<n; i++, j=i+1){
        int insastifacao = -1;
        while(j<n){
            if(idade[i]>idade[j]){
                insastifacao = j - i - 1;
            }
            j++;
        }
        vet.push_back(insastifacao);
    }
    cout<<vet[0];
    for(int i=1; i<vet.size(); i++){
        cout<<" "<<vet[i];
    } 
    cout<<endl;


    return 0;
}