#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
int buscaB(int a);

vector<ull> apartamentos;
vector<ull> tam;
int main(){
    //n= apartamentos    m= candidatos   k=diferença
    int n, m;
    ull k;
    cin>>n>>m>>k;
    ull x;
    for(int i=0; i<n; i++){
        cin>>x;
        apartamentos.push_back(x);
    } 
    for(int i=0; i<m; i++){
        cin>>x;
        tam.push_back(x);
    }
    sort(apartamentos.begin(), apartamentos.end());
    sort(tam.begin(), tam.end());

    for(int i=0; i<n; i++){
        
    }

    return 0;
}


int buscaB(int a){

    int ini = 0;
    int fim = tam.size() - 1;

    while (ini <= fim) {
        int meio = ini + (fim - ini) / 2;

        if (tam[meio] == a) {
            return meio; 
        } else if (tam[meio] < a) {
            ini = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1; 
}