#include <bits/stdc++.h>
using namespace std;


vector<bool> visitado(100005, false);
vector <int> lista[100005];

void dfs(int vertice) {
    visitado[vertice] = true;
    for (auto i : lista[vertice]) {
        if (!visitado[i]) {
            dfs(i);
        }
    }
}


int main(){

    int n; cin>>n;
    

    return 0;
}