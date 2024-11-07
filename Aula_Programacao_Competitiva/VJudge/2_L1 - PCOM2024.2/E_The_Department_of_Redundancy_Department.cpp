#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    map <int, int> mapa;
    vector<int> vet;

    while(cin>>n){
        if(mapa[n]==0){
            vet.push_back(n);
        }
        mapa[n]++;
    }
    for(int i=0; i< int(vet.size()); i++){
        cout<< vet[i]<<" "<<mapa[int(vet[i])]<<endl;
    }

    return 0;
}