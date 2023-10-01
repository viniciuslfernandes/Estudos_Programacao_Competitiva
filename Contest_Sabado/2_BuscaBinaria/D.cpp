#include <bits/stdc++.h>
using namespace std;
vector<int> vet;
int buscaB(int a);
pair<int, int> busca_soma(int x);
int main(){

    int n, r;
    cin>>n>>r;
    
    for(int i=0; i<n; i++){
        int x;cin>>x;
        vet.push_back(x);
    }
    pair<int ,int> x;
    x=busca_soma(r);
    if(x.first!=-1 && x.second !=-1){
        cout<<x.first+1<<" "<<x.second+1<<endl;
    }else{
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}

pair<int, int> busca_soma(int x){

    for(int i=0; i<vet.size(); i++){
        int a= x-vet[i];
        a=buscaB(a);
        if(a!=-1){
            return make_pair(a, i);
        }
    }
    return make_pair(-1, -1);
}

int buscaB(int a){

    int ini = 0;
    int fim = vet.size() - 1;

    while (ini <= fim) {
        int meio = ini + (fim - ini) / 2;

        if (vet[meio] == a) {
            return meio; 
        } else if (vet[meio] < a) {
            ini = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1; 
}