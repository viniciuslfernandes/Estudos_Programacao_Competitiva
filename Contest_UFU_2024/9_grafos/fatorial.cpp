#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

vector <ll> vetor(21, 1);

ll fat(int n){
    for(int i=2; i<=n; i++){
        vetor[i]= vetor[i-1]*i;
    }

    return vetor[n];
}

int main(){

    int n, m;
    while(cin>>n>>m){
        ull soma =1;
        if(n>=m){
            soma = fat(n);
            soma+= vetor[m];
        }
        else{
            soma = fat(m);
            soma+= vetor[n];
        }
        cout<<soma<<endl;
    }
    return 0;
}