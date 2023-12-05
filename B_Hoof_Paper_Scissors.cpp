#include <bits/stdc++.h>
using namespace std;
int main(){

    
    int n; cin>>n;
    vector <char> vet(n);
    int p=0, h=0, s=0;
    for(int i=0; i<n; i++){
        cin>>vet[i];
        if(vet[i]=='P') p++;
        if(vet[i]=='H') h++;
        if(vet[i]=='S') s++;
    }
    

    return 0;
}